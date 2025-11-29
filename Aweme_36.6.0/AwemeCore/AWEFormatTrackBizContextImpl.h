@class NSString;

@interface AWEFormatTrackBizContextImpl : HTSService <AWEFormatTrackBizContext>

@property (nonatomic) long long reqIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentRequestIndex;

@end
