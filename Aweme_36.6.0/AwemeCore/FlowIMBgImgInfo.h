@class NSString, NSArray;

@interface FlowIMBgImgInfo : NSObject {
    void /* function */ bgImgPrompt;
    void /* function */ bgImgPromptEn;
    void /* unknown type, empty encoding */ aiGenBgImg;
    void /* function */ bgImgDrawStyleStarlingKey;
    void /* unknown type, empty encoding */ bgImgOpen;
    void /* function */ referenceBgImgUri;
    void /* function */ referenceBgImgUrl;
    void /* function */ referenceBgImgStyle;
    void /* function */ referenceBgImgPrompt;
}

@property (nonatomic, readonly) NSString *bgImgPrompt;
@property (nonatomic, readonly) NSString *bgImgPromptEn;
@property (nonatomic, readonly) NSArray *bgImgDrawStyleStarlingKey;
@property (nonatomic, readonly) NSString *referenceBgImgUri;
@property (nonatomic, readonly) NSString *referenceBgImgUrl;
@property (nonatomic, readonly) NSString *referenceBgImgStyle;
@property (nonatomic, readonly) NSString *referenceBgImgPrompt;

- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
