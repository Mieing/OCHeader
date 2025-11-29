@class NSString, NSObject;

@interface MMToolManageItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSObject *rawData;
@property (copy, nonatomic) NSString *appUserName;

- (id)initFromChatRoomToolWeAppInfo:(id)a0;
- (void).cxx_destruct;

@end
