@class NSString, NSData;

@interface WCFinderGetMentionListCGIParams : NSObject

@property (nonatomic) long long mentionType;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSData *pageBuffer;
@property (nonatomic) unsigned long long fetchMode;
@property (nonatomic) unsigned long long aggregatedRootMentionID;
@property (copy, nonatomic) NSString *wxUsername;

+ (id)paramsWithMentionType:(long long)a0 scene:(unsigned long long)a1 finderUsername:(id)a2;

- (void).cxx_destruct;

@end
