@class HTSLivePublicAreaCommon, HTSLiveCommon, HTSLiveHighlightAreaContainer;

@interface HTSLiveRoomHighlightAreaContainerMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveHighlightAreaContainer *highlightAreaContainer;
@property (nonatomic) BOOL hasHighlightAreaContainer;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;

+ (id)descriptor;

@end
