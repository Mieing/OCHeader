@class NSString;

@interface AWERelationListActionButtonModel : NSObject

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) BOOL readInFocusForAccessibility;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ actionButtonClickBlock;

- (void).cxx_destruct;

@end
