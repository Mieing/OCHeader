@class NSString, NSMutableDictionary, IESECBSTBaseModel, NSDictionary, NSArray;

@interface IESECBSTContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *bcmStorage;
@property (copy, nonatomic) NSString *btmInfo;
@property (retain, nonatomic) id uniqueKey;
@property (retain, nonatomic) IESECBSTBaseModel *trackModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBtmChain;
@property (nonatomic) long long chainLength;
@property (retain, nonatomic) NSArray *targetPages;
@property (retain, nonatomic) NSDictionary *descriptionInfo;
@property (nonatomic) BOOL enableSendingClick;

- (void)appendBcmUnitParams:(id)a0 forKey:(id)a1;
- (void)setBcmUnitParams:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
