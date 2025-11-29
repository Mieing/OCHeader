@class HTSEventContext;

@interface IESLiveKTVDecorateModel : NSObject <IGListDiffable>

@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithTrackContext:(id)a0;
- (void).cxx_destruct;

@end
