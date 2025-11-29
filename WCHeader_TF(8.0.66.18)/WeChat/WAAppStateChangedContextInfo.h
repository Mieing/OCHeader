@class WAAppStateChangedContextInfoBluetoothInfo, WAAppStateChangedContextInfoMusicInfo, WAAppStateChangedContextInfoLocationInfo, WAAppStateChangedContextInfoWXABGAudioInfo;

@interface WAAppStateChangedContextInfo : MMObject

@property (retain, nonatomic) WAAppStateChangedContextInfoMusicInfo *musicInfo;
@property (retain, nonatomic) WAAppStateChangedContextInfoLocationInfo *locationInfo;
@property (retain, nonatomic) WAAppStateChangedContextInfoWXABGAudioInfo *wxaBGAudioInfo;
@property (retain, nonatomic) WAAppStateChangedContextInfoBluetoothInfo *bluetoothInfo;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
