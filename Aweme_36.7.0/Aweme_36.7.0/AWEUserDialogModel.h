@class NSString, NSArray, AWEUserDialogContentModel;

@interface AWEUserDialogModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *dialogReason;
@property (copy, nonatomic) AWEUserDialogContentModel *dialogContent;
@property (retain, nonatomic) NSArray *dialogButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dialogModelWith:(id)a0;
+ (id)dialogContentJSONTransformer;
+ (id)dialogButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
