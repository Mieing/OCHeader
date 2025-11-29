@class NSString, NSDictionary;

@interface BDTuringAlertOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *optionDictionary;
@property (copy) id /* block */ callback;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *optionDictionary;
@property (copy, nonatomic) id /* block */ callback;

+ (id)optionsWithArray:(id)a0 callback:(id /* block */)a1;

- (void).cxx_destruct;
- (void)triggerAction;

@end
