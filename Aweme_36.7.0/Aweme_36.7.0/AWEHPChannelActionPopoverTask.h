@class NSArray;

@interface AWEHPChannelActionPopoverTask : NSObject

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL preferDarkTheme;
@property (copy, nonatomic) id /* block */ showCallback;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
