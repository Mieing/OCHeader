@class NSMutableData, NSString, BDACSWebLoadingState;

@interface BDACSResponseItem : NSObject

@property (nonatomic) double confidence;
@property (nonatomic) long long checkDuration;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSMutableData *mData;
@property (retain, nonatomic) NSString *strTaskAddr;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) BDACSWebLoadingState *loadingState;
@property (copy, nonatomic) NSString *jumpURLString;
@property (copy, nonatomic) NSString *webURLString;

+ (id)generateItemWithTaskKey:(id)a0;

- (void)appendData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)responseData;
- (void)clearData;

@end
