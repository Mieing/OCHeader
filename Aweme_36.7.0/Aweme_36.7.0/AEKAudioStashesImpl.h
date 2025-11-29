@class NSArray, NSString;

@interface AEKAudioStashesImpl : NSObject <AEKAudioStashes>

@property (copy, nonatomic) NSArray *audioTracks;
@property (readonly, copy, nonatomic) NSArray *audios;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAudioTracks:(id)a0;
- (void).cxx_destruct;
- (id)toJsonString;

@end
