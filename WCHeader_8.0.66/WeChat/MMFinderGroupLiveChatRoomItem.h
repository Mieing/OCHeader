@class NSString;

@interface MMFinderGroupLiveChatRoomItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *chatRoomUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatRoomName;
+ (void)PBArrayAdd_chatRoomUsername;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
