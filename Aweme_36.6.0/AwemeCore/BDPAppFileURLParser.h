@class NSString, NSMutableDictionary;

@interface BDPAppFileURLParser : NSObject <BDPURLParserProtocol> {
    long long _folderIndex;
    NSString *_virtualUrl;
}

@property (retain, nonatomic) NSMutableDictionary *pathUniqueIDMap;
@property (nonatomic) BOOL decodeUrlFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)parseRequestURL:(id)a0;
- (id)generateVirtualFolderPath;
- (id)addJSSDKFolderMaskForPath:(id)a0;
- (void)registerVirtualPath:(id)a0 forUniqueId:(id)a1;
- (void)unregisterVirtualPath:(id)a0;
- (id)initWithVirtualBaseURL:(id)a0 filePathDecode:(BOOL)a1;
- (void).cxx_destruct;

@end
