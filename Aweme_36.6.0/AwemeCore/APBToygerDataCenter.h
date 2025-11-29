@class NSString, ToygerUploadContent, NSMutableArray, APBToygerBehavlogManager;
@protocol APBToygerDataCenterDelegate;

@interface APBToygerDataCenter : NSObject

@property (weak, nonatomic) id<APBToygerDataCenterDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *monitorImages;
@property (copy, nonatomic) NSString *monitorImageStr;
@property (retain, nonatomic) APBToygerBehavlogManager *behavlogManager;
@property (copy, nonatomic) NSString *bisToken;
@property (retain, nonatomic) ToygerUploadContent *panoImage;
@property (copy, nonatomic) NSString *cypherKey;
@property (copy, nonatomic) NSString *pubkey;

- (void)addMonitorImage:(id)a0 replacePanoImage:(id)a1 andCypherKeyData:(id)a2;
- (void)clearMonitorImage:(BOOL)a0 panoImage:(BOOL)a1;
- (BOOL)hasFaceData;
- (void)addBehavTask:(id)a0;
- (id)buildUploadRequestWithMonitorImage:(BOOL)a0 behavLog:(BOOL)a1 panoImage:(BOOL)a2 invokeType:(id)a3 retryCnt:(long long)a4;
- (id)buildUploadRequestWithRetryCnt:(long long)a0;
- (id)rsaImage:(id)a0 image:(id)a1;
- (void)clearTask;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
