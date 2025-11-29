@class NSArray, IESLiveKTVDecorateSubContext, IESLiveKTVDecorateMidiDataSource, IESLiveKTVDecorateTagDataSource;

@interface IESLiveKTVDecorateListDataSource : NSObject

@property (retain, nonatomic) IESLiveKTVDecorateSubContext *tagContext;
@property (retain, nonatomic) IESLiveKTVDecorateSubContext *midiContext;
@property (retain, nonatomic) NSArray *tagGridItems;
@property (retain, nonatomic) NSArray *midiGridItems;
@property (retain, nonatomic) IESLiveKTVDecorateTagDataSource *tagDataSource;
@property (retain, nonatomic) IESLiveKTVDecorateMidiDataSource *midiDataSource;
@property (nonatomic) BOOL shouldShowMidiList;

- (void)updateTagGridItems:(id)a0;
- (void)updateMidiGridItems:(id)a0;
- (void).cxx_destruct;

@end
