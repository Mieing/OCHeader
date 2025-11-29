@class NSNumber, NSMutableDictionary, NSDictionary;

@interface IESLiveInteractionStreamDataContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *businessInfo;
@property (nonatomic) BOOL audioChatroomPlayerRendering;
@property (retain, nonatomic) NSNumber *subUILayout;
@property (retain, nonatomic) NSNumber *hideAudioBG;
@property (readonly, copy, nonatomic) NSDictionary *businessData;

- (void)updateAudioChatroomPlayerRendering:(BOOL)a0 hideAudioBG:(BOOL)a1;
- (void)updateSubUILayout:(id)a0;
- (void)addStreamDataWithKey:(id)a0 dict:(id)a1;
- (void)removeStreamDataWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
