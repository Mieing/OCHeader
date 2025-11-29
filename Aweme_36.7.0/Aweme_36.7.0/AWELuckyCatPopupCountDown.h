@class NSNumber, AWELuckyCatPopupText, NSString;

@interface AWELuckyCatPopupCountDown : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *curTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (retain, nonatomic) AWELuckyCatPopupText *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
