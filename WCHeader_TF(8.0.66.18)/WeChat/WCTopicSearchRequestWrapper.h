@class NSDictionary, GetSearchShareResponse;

@interface WCTopicSearchRequestWrapper : NSObject

@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ emoticonResultBlock;
@property (nonatomic) BOOL isEmoticonRequest;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) GetSearchShareResponse *shareResponse;

- (BOOL)isValidWrapper;
- (void)callResultBlockOnFailed;
- (void)callResultBlockOnFailedWithContext:(id)a0;
- (void).cxx_destruct;

@end
