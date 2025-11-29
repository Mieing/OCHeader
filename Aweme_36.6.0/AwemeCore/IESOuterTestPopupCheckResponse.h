@class NSString, NSNumber;

@interface IESOuterTestPopupCheckResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *tipsVersionName;
@property (retain, nonatomic) NSNumber *tipsVersionCode;
@property (copy, nonatomic) NSString *realVersionName;
@property (retain, nonatomic) NSNumber *realVersionCode;
@property (copy, nonatomic) NSString *whatsNew;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *verboseName;
@property (retain, nonatomic) NSNumber *forceUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
