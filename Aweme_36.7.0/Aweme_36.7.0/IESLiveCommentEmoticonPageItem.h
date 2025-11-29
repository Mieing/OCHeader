@class NSString, UIImage, NSDictionary;

@interface IESLiveCommentEmoticonPageItem : NSObject

@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showRedDot;
@property (retain, nonatomic) UIImage *itemDefaultIcon;
@property (nonatomic) double selectIconAlpha;
@property (nonatomic) double unselectIconAlpha;
@property (copy, nonatomic) NSString *selectIconURL;
@property (copy, nonatomic) NSString *unselectIconURL;
@property (nonatomic) long long emoticonType;
@property (retain, nonatomic) Class pageViewClass;
@property (copy, nonatomic) id /* block */ emoticonPageView;
@property (copy, nonatomic) id /* block */ enableCheck;
@property (copy, nonatomic) id /* block */ enableEntranceRedDotCheck;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemDeselected;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (copy, nonatomic) id /* block */ pageDidShow;
@property (copy, nonatomic) id /* block */ pageDidCreate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)init;

@end
