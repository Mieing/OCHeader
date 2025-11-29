@class NSString;
@protocol EmoticonTextAntiSpamCgiDelegate;

@interface EmoticonTextAntiSpamCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL shouldBlock;
@property (weak, nonatomic) id<EmoticonTextAntiSpamCgiDelegate> delegate;

- (id)init;
- (BOOL)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
