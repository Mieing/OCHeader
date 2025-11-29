@interface FlowIMX.FlowIMDB : NSObject <FlowIMX.FlowIMDBQueueCheckerDelegate> {
    void /* unknown type, empty encoding */ _dbQueue;
    void /* unknown type, empty encoding */ checker;
    void /* unknown type, empty encoding */ mutex;
    void /* unknown type, empty encoding */ writeConversationQueue;
    void /* unknown type, empty encoding */ writeParticipantQueue;
    void /* unknown type, empty encoding */ writeBotQueue;
    void /* unknown type, empty encoding */ createIndexQueue;
    void /* unknown type, empty encoding */ dbQueueTaskCount;
    void /* unknown type, empty encoding */ conversationTaskCount;
    void /* unknown type, empty encoding */ participantTaskCount;
    void /* unknown type, empty encoding */ botTaskCount;
    void /* unknown type, empty encoding */ __messageTable;
    void /* unknown type, empty encoding */ __conversationTable;
    void /* unknown type, empty encoding */ __botTable;
    void /* unknown type, empty encoding */ __participantTable;
    void /* unknown type, empty encoding */ ftsDbQueue;
    void /* unknown type, empty encoding */ _wcdb;
    void /* unknown type, empty encoding */ _ftsWcdb;
    void /* unknown type, empty encoding */ preferenceStorage;
}

- (void)onTaskTimeout:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
