@class AWEECOMIMAllFoldGroupConfig;

@interface AWEECOMIMMsgFoldConfig : NSObject

@property (retain, nonatomic) AWEECOMIMAllFoldGroupConfig *allFoldGroupConfig;

+ (id)fallbackMsgFoldConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
