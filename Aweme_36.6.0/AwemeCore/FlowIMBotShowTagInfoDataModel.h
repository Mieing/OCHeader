@class NSString, FlowIMBotShowTagInfoIconInfo, FlowIMBotShowTagUIKit;

@interface FlowIMBotShowTagInfoDataModel : NSObject {
    void /* function */ showTagName;
    void /* function */ tagName;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ tagTypeValue;
    void /* unknown type, empty encoding */ tagPositionValue;
    void /* unknown type, empty encoding */ tagSavePageValue;
    void /* unknown type, empty encoding */ tagId;
}

@property (nonatomic, readonly) BOOL shouldSimultaneous;
@property (nonatomic, copy) NSString *showTagName;
@property (nonatomic, copy) NSString *tagName;
@property (nonatomic, retain) FlowIMBotShowTagInfoIconInfo *iconInfo;
@property (nonatomic, retain) FlowIMBotShowTagUIKit *tagUIKit;
@property (nonatomic, readonly) BOOL isCertificationLabel;
@property (nonatomic, readonly) BOOL isCapabilityLabel;

- (void).cxx_destruct;
- (id)init;

@end
