@class NSArray, NSString;

@interface IESIMGroupImpl.GroupJoinPopupViewModel : NSObject {
    void /* unknown type, empty encoding */ targetGroupInfoCellModel;
    void /* function */ otherGroupCellModelList;
    void /* function */ otherGroupSectionTitle;
    void /* function */ otherGroupSectionMoreGroupTitle;
    void /* function */ otherGroupSectionMoreGroupIcon;
    void /* function */ otherGroupSectionMoreGroupSchema;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, copy) NSArray *otherGroupCellModelList;
@property (nonatomic, copy) NSString *otherGroupSectionTitle;
@property (nonatomic, copy) NSString *otherGroupSectionMoreGroupTitle;
@property (nonatomic, copy) NSString *otherGroupSectionMoreGroupIcon;
@property (nonatomic, copy) NSString *otherGroupSectionMoreGroupSchema;

- (void).cxx_destruct;
- (id)init;

@end
