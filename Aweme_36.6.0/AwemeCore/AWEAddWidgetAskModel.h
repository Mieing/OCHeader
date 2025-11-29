@class NSString, NSArray;

@interface AWEAddWidgetAskModel : NSObject

@property (copy, nonatomic) NSString *mainDesc;
@property (copy, nonatomic) NSString *detailDesc;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSString *contentImagePath;
@property (copy, nonatomic) NSArray *contentImageURLs;
@property (copy, nonatomic) id /* block */ leftButtonTapCompletion;
@property (copy, nonatomic) id /* block */ rightButtonTapCompletion;

- (void).cxx_destruct;

@end
