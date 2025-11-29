@class NSString, NSArray, IESIMContactPickerContext, NSNumber;

@interface IESIMCustomGroupParticipantPanelConfiguration : IESIMContactPickerConfiguration

@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long dataSourceType;
@property (nonatomic) unsigned long long sortType;
@property (readonly, nonatomic) unsigned long long filterOption;
@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) long long selectStyle;
@property (nonatomic) long long cellTag;
@property (readonly, copy, nonatomic) NSString *cellButtonText;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (readonly, copy, nonatomic) id /* block */ didClickButtonBlock;
@property (readonly, copy, nonatomic) id /* block */ confirmBlock;
@property (retain, nonatomic) NSNumber *maximumSelectCount;
@property (readonly, copy, nonatomic) NSArray *defaultSelectAndDisableDeselectList;
@property (readonly, copy, nonatomic) id /* block */ maximumSelectBlock;
@property (readonly, nonatomic) IESIMContactPickerContext *context;

+ (id)singleSelectPanelConfigWithTitle:(id)a0 filterOption:(unsigned long long)a1 context:(id)a2;
+ (id)singleSelectPanelConfigWithTitle:(id)a0 cellButtonText:(id)a1 didClickButtonBlock:(id /* block */)a2 filterOption:(unsigned long long)a3 context:(id)a4;
+ (id)multiSelectPanelConfigWithTitle:(id)a0 defaultSelectAndDisableDeselectList:(id)a1 maximumSelectBlock:(id /* block */)a2 confirmBlock:(id /* block */)a3 filterOption:(unsigned long long)a4 context:(id)a5;

- (id)p_getRelationTagModel:(id)a0;
- (id)initWithTitle:(id)a0 filterOption:(unsigned long long)a1 context:(id)a2;
- (id)initWithTitle:(id)a0 cellButtonText:(id)a1 didClickButtonBlock:(id /* block */)a2 filterOption:(unsigned long long)a3 context:(id)a4;
- (id)initWithTitle:(id)a0 defaultSelectAndDisableDeselectList:(id)a1 maximumSelectBlock:(id /* block */)a2 confirmBlock:(id /* block */)a3 filterOption:(unsigned long long)a4 context:(id)a5;
- (id)initWithTitle:(id)a0 selectStyle:(long long)a1 cellButtonText:(id)a2 didClickButtonBlock:(id /* block */)a3 defaultSelectAndDisableDeselectList:(id)a4 maximumSelectBlock:(id /* block */)a5 confirmBlock:(id /* block */)a6 filterOption:(unsigned long long)a7 context:(id)a8;
- (void).cxx_destruct;

@end
