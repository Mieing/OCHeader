@class NSString;
@protocol IESECSlicePopoverItemConfigurationDelegate;

@interface IESECSlicePopoverItemConfiguration : NSObject

@property (copy, nonatomic) NSString *identifer;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long iconPosition;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double space;
@property (weak, nonatomic) id<IESECSlicePopoverItemConfigurationDelegate> delegate;

- (void)setupOpenSchemaItem:(id)a0;
- (void)setupCopyItem:(id)a0;
- (BOOL)setConfigurationWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
