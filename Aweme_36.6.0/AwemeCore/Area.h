@class TitleArea, UserListArea, ContentArea, RivalsArea, PKRecordListArea;

@interface Area : IESLivePBBaseMessage

@property (nonatomic) int uiType;
@property (retain, nonatomic) TitleArea *titleArea;
@property (nonatomic) BOOL hasTitleArea;
@property (retain, nonatomic) ContentArea *contentArea;
@property (nonatomic) BOOL hasContentArea;
@property (retain, nonatomic) RivalsArea *rivalsArea;
@property (nonatomic) BOOL hasRivalsArea;
@property (retain, nonatomic) UserListArea *userListArea;
@property (nonatomic) BOOL hasUserListArea;
@property (retain, nonatomic) PKRecordListArea *pkRecordListArea;
@property (nonatomic) BOOL hasPkRecordListArea;

+ (id)descriptor;

@end
