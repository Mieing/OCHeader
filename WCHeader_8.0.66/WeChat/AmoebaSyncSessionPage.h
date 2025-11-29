@class NSString;

@interface AmoebaSyncSessionPage : NSObject

@property (nonatomic) unsigned long long pageHash;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *sourceViewId;

- (BOOL)isEqualObject:(id)a0;
- (id)toString;
- (void).cxx_destruct;

@end
