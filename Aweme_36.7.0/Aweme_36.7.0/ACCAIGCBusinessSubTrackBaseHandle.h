@class ACCAIGCBusinessEventModel, NSString;

@interface ACCAIGCBusinessSubTrackBaseHandle : NSObject <ACCAIGCBusinessSubTrackProtocol>

@property (retain, nonatomic) ACCAIGCBusinessEventModel *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackEventDefine;

- (void)rebuildBusinessTrackDataWith:(id)a0;
- (id)initWithTrackModel:(id)a0;
- (void).cxx_destruct;

@end
