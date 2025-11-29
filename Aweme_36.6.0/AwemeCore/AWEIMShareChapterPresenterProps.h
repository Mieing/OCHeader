@class NSString, AWEIMChapterShareMessageViewModel;

@interface AWEIMShareChapterPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMChapterShareMessageViewModel *cellViewModel;
@property (copy, nonatomic) id /* block */ didTapChapter;
@property (copy, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSString *chapterDescString;
@property (copy, nonatomic) NSString *chapterDetailString;
@property (copy, nonatomic) NSString *invisibleString;
@property (nonatomic) unsigned long long chapterStatus;
@property (nonatomic) BOOL awemeIsAvailable;
@property (nonatomic) BOOL chatListHasBackgroundImg;

- (void).cxx_destruct;

@end
