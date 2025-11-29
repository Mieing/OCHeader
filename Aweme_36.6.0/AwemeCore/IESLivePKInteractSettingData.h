@class NSString, NSArray;

@interface IESLivePKInteractSettingData : NSObject

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *settings;
@property (nonatomic) BOOL hasMoreButton;
@property (copy, nonatomic) id /* block */ moreButtonDidClick;

- (void).cxx_destruct;

@end
