@class NSString, WCFinderNavTabTitle;

@interface WCFinderNavTabDefine : NSObject

@property (retain, nonatomic) WCFinderNavTabTitle *title;
@property (retain, nonatomic) WCFinderNavTabTitle *selectedTitle;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) id /* block */ pageGenerator;
@property (retain, nonatomic) NSString *idenfitier;

- (void).cxx_destruct;

@end
