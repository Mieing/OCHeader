@class WCDataItem, WCMediaItem, WCLanDeviceKissFileMsg, CMessageWrap;

@interface WCLanDeviceData : MMObject

@property (retain, nonatomic) WCLanDeviceKissFileMsg *m_nsFileInfo;
@property (nonatomic) unsigned long long m_nsSource;
@property (nonatomic) unsigned long long m_nsScene;
@property (retain, nonatomic) WCDataItem *m_nsDataItem;
@property (retain, nonatomic) WCMediaItem *m_nsMediaItem;
@property (retain, nonatomic) CMessageWrap *m_nsMsgWrap;

- (id)initWithMessageWrap:(id)a0;
- (id)initWithTimeLineItem:(id)a0 mediaItem:(id)a1;
- (id)musicInfo;
- (id)locationInfo;
- (id)urlInfo;
- (id)imagePath;
- (id)imageKissMsg;
- (id)filePath;
- (id)thumbPath;
- (id)fileKissMsgWithDetail:(BOOL)a0;
- (id)dataId;
- (long long)opObjType;
- (id)fileExt;
- (long long)opSource;
- (void).cxx_destruct;

@end
