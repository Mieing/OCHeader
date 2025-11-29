@class UIImage, NSString;

@interface IESIMGroupImpl.GroupJoinBaseInfoViewModel : NSObject {
    void /* function */ groupName;
    void /* function */ groupMemberCountText;
    void /* function */ groupDesc;
    void /* function */ groupOwnerName;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, retain) UIImage *groupAvatarImage;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupMemberCountText;
@property (nonatomic, copy) NSString *groupDesc;
@property (nonatomic, copy) NSString *groupOwnerName;

- (void).cxx_destruct;
- (id)init;

@end
