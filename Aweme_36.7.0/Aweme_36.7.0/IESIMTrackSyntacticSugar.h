@protocol IESIMTrackService;

@interface IESIMTrackSyntacticSugar : NSObject

@property (weak) id<IESIMTrackService> service;

+ (BOOL)shouldTrackWithSampleRate:(double)a0;
+ (id)shared;

- (void).cxx_destruct;

@end
