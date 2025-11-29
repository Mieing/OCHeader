@class NSString;

@interface AWEUnreadAwemeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long unreadCount;
@property (nonatomic) long long lastestUnreadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
