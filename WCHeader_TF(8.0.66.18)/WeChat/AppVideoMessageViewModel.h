@class NSString, UIImage, CContact;

@interface AppVideoMessageViewModel : BizAppBaseMessageViewModel {
    double m_titleHeight;
    struct CGSize { double width; double height; } m_timeSize;
}

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) BOOL isWSVideo;
@property (readonly, nonatomic) NSString *coverImgUrl;
@property (readonly, nonatomic) double coverImgHeight;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) NSString *timeText;
@property (readonly, nonatomic) NSString *sourceNickname;
@property (readonly, nonatomic) NSString *sourceUsrname;
@property (readonly, nonatomic) CContact *bizContact;
@property (readonly, nonatomic) BOOL isMalicious;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)hostText;
- (double)timeHeight;
- (BOOL)needShowSourceDividerLine;
- (id)additionalAccessibilityDescription;
- (double)sourceViewHeight;
- (void).cxx_destruct;

@end
