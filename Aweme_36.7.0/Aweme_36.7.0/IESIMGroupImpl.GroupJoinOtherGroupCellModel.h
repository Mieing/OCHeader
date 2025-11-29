@class UIImage, NSString;

@interface IESIMGroupImpl.GroupJoinOtherGroupCellModel : NSObject {
    void /* unknown type, empty encoding */ GroupCode2TitleKey;
    void /* unknown type, empty encoding */ GroupCode2EnableKey;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ pageVM;
    void /* unknown type, empty encoding */ joinStatus;
    void /* function */ groupName;
    void /* function */ groupMemberDesc;
    void /* function */ entryLimitDesc;
    void /* function */ groupActivityTag;
    void /* function */ infoDesc;
    void /* function */ joinButtonTitle;
    void /* unknown type, empty encoding */ cellSize;
}

@property (nonatomic, retain) UIImage *groupAvatar;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupMemberDesc;
@property (nonatomic, copy) NSString *entryLimitDesc;
@property (nonatomic, copy) NSString *groupActivityTag;
@property (nonatomic, copy) NSString *infoDesc;
@property (nonatomic, copy) NSString *joinButtonTitle;
@property (nonatomic) BOOL joinButtonEnable;
@property (nonatomic) double labelTopMargin;

- (void).cxx_destruct;
- (id)init;

@end
