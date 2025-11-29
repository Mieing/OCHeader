@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface IESLLTempoFontManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *fontNameMap;
@property (retain, nonatomic) NSMutableArray *registeredFontNames;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)shared;

- (BOOL)isFontRegistered:(id)a0;
- (id)realFontName:(id)a0;
- (BOOL)registerFontWithData:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
