@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEShareChannelManager : HTSService <AWEShareChannelManager>

@property (retain, nonatomic) NSMutableDictionary *channels;
@property (retain, nonatomic) NSMutableArray *channelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)channelForType:(long long)a0;
- (void)registerShareChannelType:(long long)a0 options:(unsigned long long)a1;
- (void)onServiceInitForIsolation;
- (id)sortedShareCountFromArray:(id)a0;
- (id)sortedChannelsFromChannels:(id)a0 sorting:(id)a1;
- (void)addOrReplaceShareChannel:(id)a0;
- (void)removeShareChannelForType:(long long)a0;
- (id)channelsSupportShareType:(long long)a0 inChannels:(id)a1;
- (unsigned long long)optionForChannel:(long long)a0;
- (id)sortedChannelsFromFirstRowChannels:(id)a0;
- (id)forceInsertChannels:(id)a0 isVideoShare:(BOOL)a1 isFirstRow:(BOOL)a2;
- (id)sortedChannelsFromSecondRowChannels:(id)a0;
- (void).cxx_destruct;
- (id)allChannels;

@end
