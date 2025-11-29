@class NSArray, NSString, NSMutableArray;

@interface WCMultiShareHelper : NSObject

@property (retain, nonatomic) NSArray *arrMsgWrap;
@property (retain, nonatomic) NSString *nsCurrTime;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableArray *arrNotDownloadMsgWrap;

+ (id)generateShareItemWithObjects:(id)a0;

- (id)initWithMsgList:(id)a0 scene:(int)a1;
- (id)getEncodeNickName:(id)a0;
- (id)getTextShareContent:(id)a0 content:(id)a1;
- (id)getImageShareContent:(id)a0 isFileExist:(BOOL)a1;
- (id)getVideoShareContent:(id)a0 isFileExist:(BOOL)a1;
- (id)getFileShareContent:(id)a0 isFileExist:(BOOL)a1;
- (id)getVoiceShareContent:(id)a0;
- (id)getURLShareContent:(id)a0;
- (id)getURLShareContentForH5:(id)a0;
- (id)getOtherShareContent:(id)a0;
- (id)generatePasteShareItems;
- (id)generatePasteShareItemsForH5;
- (id)generateSystemShareItems;
- (void).cxx_destruct;

@end
