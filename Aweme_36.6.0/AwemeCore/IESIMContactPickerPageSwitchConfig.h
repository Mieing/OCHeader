@class NSArray, NSString;

@interface IESIMContactPickerPageSwitchConfig : NSObject

@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *defaultTag;
@property (copy, nonatomic) id /* block */ constructVCBlock;
@property (nonatomic) unsigned long long switchType;
@property (copy, nonatomic) id /* block */ onClickBlock;
@property (copy, nonatomic) id /* block */ onTabViewShow;
@property (nonatomic) BOOL isLazyCreateSubVC;
@property (nonatomic) BOOL disableEndEditingWhenClick;

- (id)initTags:(id)a0 defaultTag:(id)a1 constructVCBlock:(id /* block */)a2 switchType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
