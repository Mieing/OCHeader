@class NSString, UIColor;

@interface MMFinderLivePageSheetNoticeActionConfig : NSObject

@property (retain, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *bgColor;

+ (id)cancelAction;
+ (id)commonAction;

- (void).cxx_destruct;

@end
