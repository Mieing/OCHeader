@class NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol IESLiveKTVExclusiveDelegate;

@interface IESLiveKTVExclusiveTool : NSObject

@property (retain, nonatomic) NSMutableDictionary *exclusiveState;
@property (retain, nonatomic) NSMutableDictionary *intermediates;
@property (retain, nonatomic) NSMutableSet *intermediatesSet;
@property (retain, nonatomic) NSDictionary *exclusiveDict;
@property (weak, nonatomic) id<IESLiveKTVExclusiveDelegate> delegate;

- (id)getObjectPath:(id)a0;
- (void)addExclusiveObject:(id)a0 key:(id)a1;
- (void)updateExclusiveObject:(id)a0 key:(id)a1;
- (void)conductExclusionFor:(id)a0;
- (void)resumeFor:(id)a0;
- (BOOL)isInExclusion:(id)a0;
- (void)holdback:(id)a0 key:(id)a1 afterAction:(id /* block */)a2;
- (void).cxx_destruct;

@end
