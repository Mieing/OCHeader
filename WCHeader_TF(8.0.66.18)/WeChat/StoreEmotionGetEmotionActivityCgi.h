@class NSString;
@protocol StoreEmotionGetEmotionActivityCgiDelegate;

@interface StoreEmotionGetEmotionActivityCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSString *linkId;
@property (weak, nonatomic) id<StoreEmotionGetEmotionActivityCgiDelegate> delegate;
@property (readonly, nonatomic) NSString *activityId;
@property (readonly, nonatomic) NSString *md5;

- (id)init;
- (BOOL)startRequestWithActivityId:(id)a0 md5:(id)a1 linkId:(id)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
