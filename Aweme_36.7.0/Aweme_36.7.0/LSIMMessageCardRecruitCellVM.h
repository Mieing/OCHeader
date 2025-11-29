@class NSString;

@interface LSIMMessageCardRecruitCellVM : LSIMMessageCardBaseCellVM <LSIMMessageRecruitCellVM>

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *leftDetailText;
@property (copy, nonatomic) NSString *rightDetailText;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *activityID;
@property (readonly, nonatomic) BOOL isLeftDetailInStrong;
@property (readonly, nonatomic) BOOL isRightDetailInStrong;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage;
- (void)containerDidTapped;
- (void).cxx_destruct;

@end
