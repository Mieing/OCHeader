@class NSArray;

@interface WeChat.GlobalSearchDataSource : NSObject {
    void /* unknown type, empty encoding */ displayedResults;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchIntentionController;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ topHits;
    void /* unknown type, empty encoding */ singleContact;
    void /* unknown type, empty encoding */ groupContact;
    void /* unknown type, empty encoding */ brandContact;
    void /* unknown type, empty encoding */ feature;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ fav;
    void /* unknown type, empty encoding */ finderContact;
    void /* unknown type, empty encoding */ weapp;
    void /* unknown type, empty encoding */ searchContact;
    void /* unknown type, empty encoding */ webSearch;
    void /* unknown type, empty encoding */ kfContact;
    void /* unknown type, empty encoding */ minimizeTask;
    void /* unknown type, empty encoding */ brandServiceContact;
    void /* unknown type, empty encoding */ weshop;
    void /* unknown type, empty encoding */ refreshPageSubject;
    void /* unknown type, empty encoding */ searchDoneSubject;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sortedSections;
    void /* unknown type, empty encoding */ sugShouldAvoid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hasWebSearchIntention;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isWebSearchFirstMatch;
}

@property (nonatomic, readonly) BOOL onlyHasWebResult;
@property (nonatomic, readonly) BOOL hasResult;
@property (nonatomic, readonly) BOOL allSectionsHasResult;
@property (nonatomic, readonly) BOOL hasSectionWaitDisplay;
@property (nonatomic, copy) NSArray *displayedResults;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ config;

- (long long)sectionIndexOf:(unsigned long long)a0;
- (id)sugContext;
- (id)initWithDelegate:(id)a0 config:(id)a1;
- (id)getConfig;
- (void)updateSection:(unsigned long long)a0 data:(id)a1;
- (void)finishSearchOf:(unsigned long long)a0 data:(id)a1;
- (void)sortSections;
- (id)init;
- (void).cxx_destruct;

@end
