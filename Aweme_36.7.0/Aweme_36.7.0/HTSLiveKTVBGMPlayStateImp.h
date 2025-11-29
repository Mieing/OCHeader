@class NSString;

@interface HTSLiveKTVBGMPlayStateImp : NSObject <IESLiveKTVBGMPlayState>

@property (nonatomic) unsigned long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;

@end
