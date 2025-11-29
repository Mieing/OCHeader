@class NSString, NSDictionary, NSArray, NSMutableDictionary, UIView;

@interface IESECTrackBuilder : NSObject

@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *adLabel;
@property (copy, nonatomic) NSString *adRefer;
@property (copy, nonatomic) NSArray *filterList;
@property (retain, nonatomic) NSMutableDictionary *outParams;
@property (nonatomic) BOOL ignore;
@property (copy, nonatomic) NSDictionary *logExtraDataDict;
@property (copy, nonatomic) NSDictionary *btmParams;
@property (nonatomic) BOOL isBst;
@property (retain, nonatomic) id bstUniqueKey;
@property (copy, nonatomic) NSString *bstRuleKey;
@property (weak, nonatomic) UIView *bstView;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;

@end
