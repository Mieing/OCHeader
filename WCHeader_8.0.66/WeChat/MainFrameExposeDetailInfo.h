@class NSString;

@interface MainFrameExposeDetailInfo : NSObject <YYModel>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long mute;
@property (nonatomic) unsigned long long msgTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
