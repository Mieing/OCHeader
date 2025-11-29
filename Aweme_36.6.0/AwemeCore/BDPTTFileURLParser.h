@class NSString;

@interface BDPTTFileURLParser : NSObject <BDPURLParserProtocol>

@property (nonatomic) BOOL decodeUrlFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseRequestURL:(id)a0 uniqueID:(id)a1;
- (id)initFilePathDecode:(BOOL)a0;

@end
