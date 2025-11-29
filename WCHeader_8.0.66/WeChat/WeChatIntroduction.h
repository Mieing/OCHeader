@class NSString;

@interface WeChatIntroduction : NSObject <YYModel>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
