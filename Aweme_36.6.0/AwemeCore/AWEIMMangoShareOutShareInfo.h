@class NSString, AWEIMMangoShareOutShareActivityInfo;

@interface AWEIMMangoShareOutShareInfo : NSObject

@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, nonatomic) AWEIMMangoShareOutShareActivityInfo *activityInfo;
@property (readonly, copy, nonatomic) id /* block */ dynamicActivityInfoAction;

- (id)initWithActivityType:(id)a0 activityInfo:(id)a1;
- (id)initWithActivityType:(id)a0 dynamicActivityInfoAction:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
