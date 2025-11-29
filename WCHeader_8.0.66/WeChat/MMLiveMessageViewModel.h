@class NSString;

@interface MMLiveMessageViewModel : CommonMessageViewModel <MMGroupLiveMgrExt> {
    double _cacheTitleHeight;
    unsigned int _currentLiveStatus;
}

@property (readonly, nonatomic) NSString *liveTitle;
@property (readonly, nonatomic) NSString *liveStatus;
@property (readonly, nonatomic) unsigned long long liveId;
@property (readonly, nonatomic) BOOL isLiveEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)summayText:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceIcon;
- (id)sourceTitle;
- (id)sourceTag;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (void)onGetLiveInfoWithResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 andLiveInfo:(id)a3;
- (void)onLiveClosedResult:(id)a0 andLiveId:(unsigned long long)a1;
- (void)updateCurrentLiveStatus:(int)a0;
- (void).cxx_destruct;

@end
