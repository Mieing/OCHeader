@class NSDictionary, NSString, UIPasteboard, NSMutableDictionary, NSError, NSIndexSet, NSArray;
@protocol BDPrivacyCertProtocol;

@interface TMPasteboardComponent : NSObject <TMComponent>

@property (readonly, nonatomic) NSString *apiName;
@property (readonly, nonatomic) UIPasteboard *pasteboard;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) BOOL isGeneralPasteboard;
@property (readonly, nonatomic) BOOL isInitiativeRead;
@property (retain, nonatomic) NSString *pasteboardName;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *reportParams;
@property (retain, nonatomic) NSString *pasteboardType;
@property (retain, nonatomic) NSIndexSet *itemSet;
@property (retain, nonatomic) NSString *pasteboardAPIType;
@property (retain, nonatomic) NSString *threadName;
@property (nonatomic) SEL api;
@property (nonatomic) BOOL fromHook;
@property (nonatomic) unsigned long long unitDisable;
@property (readonly, nonatomic) BOOL hasReadContent;
@property (readonly, nonatomic) BOOL sameAsCache;
@property (nonatomic) SEL containsDataAPI;
@property (nonatomic) BOOL pasteboardChanged;
@property (nonatomic) BOOL useCache;
@property (nonatomic) double realReadDuration;
@property (retain, nonatomic) NSArray *matchedPatterns;
@property (retain, nonatomic) id returnValue;
@property (retain, nonatomic) id cacheValue;
@property (retain, nonatomic) id setValue;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isRepeatWrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
