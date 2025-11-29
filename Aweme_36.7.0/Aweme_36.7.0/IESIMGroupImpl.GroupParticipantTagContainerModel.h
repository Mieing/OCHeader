@class NSArray;
@protocol IESIMGroupParticipantTagConfigProtocol;

@interface IESIMGroupImpl.GroupParticipantTagContainerModel : NSObject <IESIMGroupParticipantTagContainerModelProtocol> {
    void /* function */ tagModels;
}

@property (nonatomic, copy) NSArray *tagModels;
@property (nonatomic, retain) id<IESIMGroupParticipantTagConfigProtocol> tagConfig;
@property (nonatomic) double tagSpacing;

- (id)initWithTagModels:(id)a0 scene:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
